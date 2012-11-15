/*
 * Copyright (C) 1999-2001 Free Software Foundation, Inc.
 * This file is part of the GNU LIBICONV Library.
 *
 * The GNU LIBICONV Library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * The GNU LIBICONV Library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with the GNU LIBICONV Library; see the file COPYING.LIB.
 * If not, write to the Free Software Foundation, Inc., 59 Temple Place -
 * Suite 330, Boston, MA 02111-1307, USA.
 */

/*
 * CP852
 */

static const unsigned short cp852_2uni[128] = {
  /* 0x80 */
  0x00c7, 0x00fc, 0x00e9, 0x00e2, 0x00e4, 0x016f, 0x0107, 0x00e7,
  0x0142, 0x00eb, 0x0150, 0x0151, 0x00ee, 0x0179, 0x00c4, 0x0106,
  /* 0x90 */
  0x00c9, 0x0139, 0x013a, 0x00f4, 0x00f6, 0x013d, 0x013e, 0x015a,
  0x015b, 0x00d6, 0x00dc, 0x0164, 0x0165, 0x0141, 0x00d7, 0x010d,
  /* 0xa0 */
  0x00e1, 0x00ed, 0x00f3, 0x00fa, 0x0104, 0x0105, 0x017d, 0x017e,
  0x0118, 0x0119, 0x00ac, 0x017a, 0x010c, 0x015f, 0x00ab, 0x00bb,
  /* 0xb0 */
  0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x00c1, 0x00c2, 0x011a,
  0x015e, 0x2563, 0x2551, 0x2557, 0x255d, 0x017b, 0x017c, 0x2510,
  /* 0xc0 */
  0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x0102, 0x0103,
  0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x00a4,
  /* 0xd0 */
  0x0111, 0x0110, 0x010e, 0x00cb, 0x010f, 0x0147, 0x00cd, 0x00ce,
  0x011b, 0x2518, 0x250c, 0x2588, 0x2584, 0x0162, 0x016e, 0x2580,
  /* 0xe0 */
  0x00d3, 0x00df, 0x00d4, 0x0143, 0x0144, 0x0148, 0x0160, 0x0161,
  0x0154, 0x00da, 0x0155, 0x0170, 0x00fd, 0x00dd, 0x0163, 0x00b4,
  /* 0xf0 */
  0x00ad, 0x02dd, 0x02db, 0x02c7, 0x02d8, 0x00a7, 0x00f7, 0x00b8,
  0x00b0, 0x00a8, 0x02d9, 0x0171, 0x0158, 0x0159, 0x25a0, 0x00a0,
};

static int
cp852_mbtowc (conv_t conv, ucs4_t *pwc, const unsigned char *s, int n)
{
  unsigned char c = *s;
  if (c < 0x80)
    *pwc = (ucs4_t) c;
  else
    *pwc = (ucs4_t) cp852_2uni[c-0x80];
  return 1;
}

static const unsigned char cp852_page00[224] = {
  0xff, 0x00, 0x00, 0x00, 0xcf, 0x00, 0x00, 0xf5, /* 0xa0-0xa7 */
  0xf9, 0x00, 0x00, 0xae, 0xaa, 0xf0, 0x00, 0x00, /* 0xa8-0xaf */
  0xf8, 0x00, 0x00, 0x00, 0xef, 0x00, 0x00, 0x00, /* 0xb0-0xb7 */
  0xf7, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 0x00, /* 0xb8-0xbf */
  0x00, 0xb5, 0xb6, 0x00, 0x8e, 0x00, 0x00, 0x80, /* 0xc0-0xc7 */
  0x00, 0x90, 0x00, 0xd3, 0x00, 0xd6, 0xd7, 0x00, /* 0xc8-0xcf */
  0x00, 0x00, 0x00, 0xe0, 0xe2, 0x00, 0x99, 0x9e, /* 0xd0-0xd7 */
  0x00, 0x00, 0xe9, 0x00, 0x9a, 0xed, 0x00, 0xe1, /* 0xd8-0xdf */
  0x00, 0xa0, 0x83, 0x00, 0x84, 0x00, 0x00, 0x87, /* 0xe0-0xe7 */
  0x00, 0x82, 0x00, 0x89, 0x00, 0xa1, 0x8c, 0x00, /* 0xe8-0xef */
  0x00, 0x00, 0x00, 0xa2, 0x93, 0x00, 0x94, 0xf6, /* 0xf0-0xf7 */
  0x00, 0x00, 0xa3, 0x00, 0x81, 0xec, 0x00, 0x00, /* 0xf8-0xff */
  /* 0x0100 */
  0x00, 0x00, 0xc6, 0xc7, 0xa4, 0xa5, 0x8f, 0x86, /* 0x00-0x07 */
  0x00, 0x00, 0x00, 0x00, 0xac, 0x9f, 0xd2, 0xd4, /* 0x08-0x0f */
  0xd1, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x10-0x17 */
  0xa8, 0xa9, 0xb7, 0xd8, 0x00, 0x00, 0x00, 0x00, /* 0x18-0x1f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x20-0x27 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x28-0x2f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x30-0x37 */
  0x00, 0x91, 0x92, 0x00, 0x00, 0x95, 0x96, 0x00, /* 0x38-0x3f */
  0x00, 0x9d, 0x88, 0xe3, 0xe4, 0x00, 0x00, 0xd5, /* 0x40-0x47 */
  0xe5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x48-0x4f */
  0x8a, 0x8b, 0x00, 0x00, 0xe8, 0xea, 0x00, 0x00, /* 0x50-0x57 */
  0xfc, 0xfd, 0x97, 0x98, 0x00, 0x00, 0xb8, 0xad, /* 0x58-0x5f */
  0xe6, 0xe7, 0xdd, 0xee, 0x9b, 0x9c, 0x00, 0x00, /* 0x60-0x67 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xde, 0x85, /* 0x68-0x6f */
  0xeb, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
  0x00, 0x8d, 0xab, 0xbd, 0xbe, 0xa6, 0xa7, 0x00, /* 0x78-0x7f */
};
static const unsigned char cp852_page02[32] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, /* 0xc0-0xc7 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd0-0xd7 */
  0xf4, 0xfa, 0x00, 0xf2, 0x00, 0xf1, 0x00, 0x00, /* 0xd8-0xdf */
};
static const unsigned char cp852_page25[168] = {
  0xc4, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x00-0x07 */
  0x00, 0x00, 0x00, 0x00, 0xda, 0x00, 0x00, 0x00, /* 0x08-0x0f */
  0xbf, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, /* 0x10-0x17 */
  0xd9, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, /* 0x18-0x1f */
  0x00, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, /* 0x20-0x27 */
  0x00, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, /* 0x28-0x2f */
  0x00, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, /* 0x30-0x37 */
  0x00, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, /* 0x38-0x3f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x40-0x47 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x48-0x4f */
  0xcd, 0xba, 0x00, 0x00, 0xc9, 0x00, 0x00, 0xbb, /* 0x50-0x57 */
  0x00, 0x00, 0xc8, 0x00, 0x00, 0xbc, 0x00, 0x00, /* 0x58-0x5f */
  0xcc, 0x00, 0x00, 0xb9, 0x00, 0x00, 0xcb, 0x00, /* 0x60-0x67 */
  0x00, 0xca, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00, /* 0x68-0x6f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x78-0x7f */
  0xdf, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, /* 0x80-0x87 */
  0xdb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x88-0x8f */
  0x00, 0xb0, 0xb1, 0xb2, 0x00, 0x00, 0x00, 0x00, /* 0x90-0x97 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x98-0x9f */
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa0-0xa7 */
};

static int
cp852_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, int n)
{
  unsigned char c = 0;
  if (wc < 0x0080) {
    *r = wc;
    return 1;
  }
  else if (wc >= 0x00a0 && wc < 0x0180)
    c = cp852_page00[wc-0x00a0];
  else if (wc >= 0x02c0 && wc < 0x02e0)
    c = cp852_page02[wc-0x02c0];
  else if (wc >= 0x2500 && wc < 0x25a8)
    c = cp852_page25[wc-0x2500];
  if (c != 0) {
    *r = c;
    return 1;
  }
  return RET_ILUNI;
}

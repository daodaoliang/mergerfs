/*
  ISC License

  Copyright (c) 2016, Antonio SJ Musumeci <trapexit@spawn.link>

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

#ifndef __FS_BASE_WRITE_HPP__
#define __FS_BASE_WRITE_HPP__

#include <unistd.h>

namespace fs
{
  static
  inline
  ssize_t
  write(const int     fd,
        const void   *buf,
        const size_t  count)
  {
    return ::write(fd,buf,count);
  }

  static
  inline
  ssize_t
  pwrite(const int     fd,
         const void   *buf,
         const size_t  count,
         const off_t   offset)
  {
    return ::pwrite(fd,buf,count,offset);
  }
}

#endif

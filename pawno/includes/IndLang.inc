/*

    IndLang - Indonesian Language untuk Pawn
    Dibuat oleh: LolipopForLife/Alter
    
    Tujuan ini dibuat hanya untuk proyek hobi semata, dan membantu orang untuk dapat mengkoding pawn
    tanpa tahu bahasa inggris terlebih dahulu. Project ini mungkin mengarah kepada esoteric language 

    Copyright (C) 2018  LolipopForLife/Alter

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#if defined _included_IndLang
	#endinput
#endif 
#define _included_IndLang

#define apabila if
#define jika if
#define ketika if

#define tetapi else
#define kecuali else
#define atau else

#define pilih switch
#define pilihan case

#define kalau for

#define publik public
#define statik static
#define stok stock
#define umumkan forward
#define konstan const
#define variabel new

#define kembalikan return

#define fungsi%0(%1) \
    forward%0(%1); public%0(%1)

#define string:
#define void:
#define int:
#define hex:

#define mirip ==
#define gamirip !=

#define dan &&
#define atau ||

#define tampilkan printf

// Contoh
#if 0
publik OnPlayerConnect(playerid)
{
    variabel a = 3;
    apabila (a mirip 3)
    {
        kembalikan 3;
    }
    kecuali jika (a mirip 4)
    {
        kembalikan 4;
    }
    
    kalau (b = 3; a gamirip 10, b ++)
    {
        tampilkan("b sama dengan %d", b);
    }
}
#endif

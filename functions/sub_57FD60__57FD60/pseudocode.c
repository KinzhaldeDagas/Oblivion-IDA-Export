void __usercall sub_57FD60(Tile **a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  v6 = 0x80000000;
  v5 = sub_57DA90(a1, a2, a3, a4, &v6, 0);
  if ( v5 )
  {
    sub_57F9F0((float *)a1, a2, a4, a3, *(float *)&v5, (_DWORD *)0xFDD, 0);
    *(_WORD *)(*((_DWORD *)a1[7] + 9) + 0x18) |= 1u;
    Tile_SetFloat(a1[7], (_DWORD *)0xFA1, 1.0);
    *((_BYTE *)a1 + 0xB9) = 0;
  }
  else
  {
    sub_57F9F0((float *)a1, a2, a4, a3, 0.0, (_DWORD *)0xFDD, 0);
  }
}

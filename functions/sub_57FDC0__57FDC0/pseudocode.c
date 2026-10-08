void __userpurge sub_57FDC0(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  _DWORD *v6; // ecx
  void (__usercall ***v7)(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>); // ecx
  Tile *File; // eax
  float a2; // [esp+8h] [ebp-8h]

  v6 = *(_DWORD **)(a1 + 0x84); /*0x57fdc7*/
  if ( v6 && a5 == 2 ) /*0x57fdd4*/
  {
    Tile_GetFloat(v6, 0xFA1); /*0x57fddb*/
  }
  else if ( a5 == 3 ) /*0x57fde7*/
  {
    if ( v6 ) /*0x57fdeb*/
      (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x57fdf3*/
    *(_DWORD *)(a1 + 0x84) = 0; /*0x57fdf5*/
  }
  v7 = *(void (__usercall ****)(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(a1 + 0x84); /*0x57fdff*/
  if ( v7 ) /*0x57fe07*/
  {
    (**v7)(v7, 1, a4, a3, st5_0); /*0x57fe5b*/
    *(_DWORD *)(a1 + 0x84) = 0; /*0x57fe5d*/
  }
  else
  {
    File = Tile::ReadFile(*(Tile **)(a1 + 0x68), "Data\\Menus\\Main\\safe_zone.xml"); /*0x57fe11*/
    a2 = fConstant_2; /*0x57fe1d*/
    *(_DWORD *)(a1 + 0x84) = File; /*0x57fe27*/
    Tile_SetFloat(File, 0xFA1u, a2); /*0x57fe2d*/
    sub_57EA20(*(NiObject **)(*(_DWORD *)(a1 + 0x84) + 0x24), 1.0, 0.0); /*0x57fe4c*/
  }
}

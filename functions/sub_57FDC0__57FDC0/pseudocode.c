void __userpurge sub_57FDC0(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  _DWORD *v7; // ecx
  void (__usercall ***v8)(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>); // ecx
  unsigned int *XML; // eax
  float a2; // [esp+8h] [ebp-8h]

  v7 = *(_DWORD **)(a1 + 0x84);
  if ( v7 && a5 == 2 )
  {
    Tile_GetFloat(v7, 0xFA1);
  }
  else if ( a5 == 3 )
  {
    if ( v7 )
      (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1);
    *(_DWORD *)(a1 + 0x84) = 0;
  }
  v8 = *(void (__usercall ****)(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(a1 + 0x84);
  if ( v8 )
  {
    (**v8)(v8, 1, a4, a3, st5_0);
    *(_DWORD *)(a1 + 0x84) = 0;
  }
  else
  {
    XML = Menu_LoadXML(*(TileWindow **)(a1 + 0x68), st5_0, a3, a4, "Data\\Menus\\Main\\safe_zone.xml");
    a2 = fConstant_2;
    *(_DWORD *)(a1 + 0x84) = XML;
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFA1, a2);
    sub_57EA20(*(NiObject **)(*(_DWORD *)(a1 + 0x84) + 0x24), 1.0, 0.0);
  }
}

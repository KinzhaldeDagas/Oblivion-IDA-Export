void __stdcall sub_7FED20(_DWORD *a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // ebp
  NiRenderedTexture *v4; // eax
  _DWORD *v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // edi

  v2 = a1[0x38];
  if ( v2 )
  {
    v3 = **(_DWORD ***)(a2 + 0x24);
    if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x8C))(a1, 0) )
    {
      v4 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x8C))(a1, 0);
    }
    else
    {
      v4 = (NiRenderedTexture *)dword_B430F0;
      if ( (a1[7] & 0x80) == 0 )
        v4 = (NiRenderedTexture *)dword_B430DC;
    }
    sub_76C910(v3, v4);
    sub_7715E0((_DWORD **)v3, 3);
    v5 = *(_DWORD **)(*(_DWORD *)(a2 + 0x24) + 4);
    if ( *(_DWORD *)(v2 + 8) )
      sub_76C910(v5, *(NiRenderedTexture **)(v2 + 8));
    else
      sub_76C910(v5, (NiRenderedTexture *)dword_B43120);
    sub_7715E0((_DWORD **)v5, 3);
    sub_862600(a2, 2u);
    v6 = *(_DWORD *)(v2 + 0x5C);
    if ( !*(_DWORD *)(a2 + 0x30) )
      *(_DWORD *)(a2 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(a2 + 0x30), 0x13, v6, 0);
    v7 = *(_DWORD *)(v2 + 0x60);
    if ( !*(_DWORD *)(a2 + 0x30) )
      *(_DWORD *)(a2 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(a2 + 0x30), 0x14, v7, 0);
    v8 = *(_DWORD *)(v2 + 0x64);
    if ( !*(_DWORD *)(a2 + 0x30) )
      *(_DWORD *)(a2 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(a2 + 0x30), 0xAB, v8, 1u);
    v9 = *(_DWORD *)(v2 + 0x68);
    if ( !*(_DWORD *)(a2 + 0x30) )
      *(_DWORD *)(a2 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(a2 + 0x30), 0x17, v9, 0);
  }
}

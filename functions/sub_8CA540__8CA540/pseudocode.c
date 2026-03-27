_WORD *__thiscall sub_8CA540(_WORD *this, int *a2, int a3)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  int i; // edi
  int v14; // ecx
  int v15; // eax
  int *v17[3]; // [esp+20h] [ebp-210h] BYREF
  char v18[512]; // [esp+2Ch] [ebp-204h] BYREF

  *(this + 3) = 1;
  *(_DWORD *)this = &off_A99AE8;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0x80000000;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0x80000000;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0x80000000;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0x80000000;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0x80000000;
  *((_DWORD *)this + 0x12) = a3;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0x80000000;
  *((_BYTE *)this + 0x58) = 0;
  *((_DWORD *)this + 0x22) = "Frame Timer";
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((_BYTE *)this + 0x80) = 0;
  *((_DWORD *)this + 0x21) = 0;
  v4 = *((_DWORD *)this + 8);
  if ( (*((_DWORD *)this + 8) & 0x3FFFFFFF) < a2[1] )
  {
    v5 = TlsIndex;
    if ( (v4 & 0x80000000) == 0 )
    {
      v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v5) + 0x19C);
      if ( !v6 )
        v6 = dword_BA7D9C;
      sub_8A75D0(v6, *((_DWORD **)this + 6), 4 * *((_DWORD *)this + 8), 0x14);
    }
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v5) + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    v8 = sub_8A7560(v7, 4 * a2[1], 0x14);
    v9 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 6) = v8;
    *((_DWORD *)this + 8) = a2[1] | v9 & 0x40000000;
  }
  v10 = a2[1];
  v11 = *((_DWORD **)this + 6);
  *((_DWORD *)this + 7) = v10;
  if ( v10 > 0 )
  {
    v12 = *a2 - (_DWORD)v11;
    do
    {
      *v11 = *(_DWORD *)((char *)v11 + v12);
      ++v11;
      --v10;
    }
    while ( v10 );
  }
  for ( i = 0; i < *((_DWORD *)this + 7); ++i )
  {
    v14 = *(_DWORD *)(*((_DWORD *)this + 6) + 4 * i);
    (*(void (__thiscall **)(int, _WORD *))(*(_DWORD *)v14 + 8))(v14, this);
  }
  (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_BA7FB0 + 0x18))(
    dword_BA7FB0,
    0x1293ADEF,
    "Visual Debugger");
  sub_8BBFB0((int)v17, 0, v18, 0x200u, 1);
  sub_8BBDB0(v17, "VDB Server instance has been created");
  (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
    dword_BA7FB0,
    0,
    0xFFFFFFFF,
    v18,
    ".\\hkVisualDebugger.cpp",
    0x26);
  sub_8BC000(v17);
  sub_9184F0();
  sub_8CA3C0((const void **)this, "DebugDisplay");
  sub_8CA3C0((const void **)this, "Shapes");
  sub_8CA3C0((const void **)this, "MousePicking");
  v15 = *((_DWORD *)this + 0x12);
  if ( v15 )
  {
    if ( *(_WORD *)(v15 + 4) )
      ++*(_WORD *)(v15 + 6);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_BA7FB0 + 0x1C))(dword_BA7FB0);
  return this;
}

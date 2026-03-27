char __thiscall MemoryHeap_constr__(_BYTE *this, int a2, char a3)
{
  int v4; // edx
  int (__thiscall *v5)(_BYTE *, int); // eax
  int v6; // eax
  int (__thiscall *v7)(_BYTE *, int); // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  signed int v13; // eax
  _BYTE *v14; // eax
  signed int v15; // eax
  _BYTE *v16; // eax
  signed int v17; // eax
  _BYTE *v18; // eax
  signed int v19; // eax
  _BYTE *v20; // eax
  char result; // al
  struct _MEMORYSTATUS Buffer; // [esp+Ch] [ebp-40h] BYREF
  struct _MEMORYSTATUS v23; // [esp+2Ch] [ebp-20h] BYREF
  int v24; // [esp+50h] [ebp+4h]

  *(this + 0x16D) = 0;
  GlobalMemoryStatus((LPMEMORYSTATUS)&Buffer);
  v4 = *(_DWORD *)this;
  *((_DWORD *)this + 0x5A) = Buffer.dwTotalPhys - Buffer.dwAvailPhys;
  *((_DWORD *)this + 3) = a2;
  v5 = *(int (__thiscall **)(_BYTE *, int))(v4 + 4);
  *((_DWORD *)this + 1) = 4;
  *((_DWORD *)this + 0x59) = 0;
  *((_DWORD *)this + 2) = 0x10;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x16) = 0;
  v6 = v5(this, a2);
  *((_DWORD *)this + 6) = v6;
  if ( !v6 )
    _LN26(0);
  v7 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0xC);
  *((_DWORD *)this + 0xC) = 0x400;
  v8 = v7(this, 0x2000);
  v9 = v8 + 8 * *((_DWORD *)this + 0xC) - 8;
  *((_DWORD *)this + 0xD) = v8;
  v10 = *(_DWORD *)this;
  *((_DWORD *)this + 0xE) = v9;
  *((_DWORD *)this + 0x11) = (*(int (__thiscall **)(_BYTE *, int))(v10 + 0xC))(this, 0x80);
  v11 = 0;
  v12 = 2;
  v24 = 4;
  do
  {
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11)) = 0;
    v13 = (unsigned int)(*((_DWORD *)this + 1) + (v12 - 2) * ((*((_DWORD *)this + 1) << 0xA) / 0x10))
        / *((_DWORD *)this + 1)
        - 1;
    if ( v13 < *((_DWORD *)this + 0xC) )
      v14 = (_BYTE *)(*((_DWORD *)this + 0xD) + 8 * v13);
    else
      v14 = this + 0x3C;
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 4) = v14;
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 8) = 0;
    v15 = (unsigned int)(*((_DWORD *)this + 1) + (v12 - 1) * ((*((_DWORD *)this + 1) << 0xA) / 0x10))
        / *((_DWORD *)this + 1)
        - 1;
    if ( v15 < *((_DWORD *)this + 0xC) )
      v16 = (_BYTE *)(*((_DWORD *)this + 0xD) + 8 * v15);
    else
      v16 = this + 0x3C;
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0xC) = v16;
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0x10) = 0;
    v17 = (unsigned int)(*((_DWORD *)this + 1) + v12 * ((*((_DWORD *)this + 1) << 0xA) / 0x10)) / *((_DWORD *)this + 1)
        - 1;
    if ( v17 < *((_DWORD *)this + 0xC) )
      v18 = (_BYTE *)(*((_DWORD *)this + 0xD) + 8 * v17);
    else
      v18 = this + 0x3C;
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0x14) = v18;
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0x18) = 0;
    v19 = (unsigned int)(*((_DWORD *)this + 1) + (v12 + 1) * ((*((_DWORD *)this + 1) << 0xA) / 0x10))
        / *((_DWORD *)this + 1)
        - 1;
    if ( v19 < *((_DWORD *)this + 0xC) )
      v20 = (_BYTE *)(*((_DWORD *)this + 0xD) + 8 * v19);
    else
      v20 = this + 0x3C;
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0x1C) = v20;
    v12 += 4;
    v11 += 0x20;
    --v24;
  }
  while ( v24 );
  _memset(*((_DWORD *)this + 0xD), 0, 8 * *((_DWORD *)this + 0xC));
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  GlobalMemoryStatus((LPMEMORYSTATUS)&v23);
  *((_DWORD *)this + 0x15) = v23.dwAvailPhys;
  result = a3;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *(this + 0x64) = 0;
  *(this + 0x16C) = a3;
  if ( !a3 )
    return sub_402170();
  return result;
}

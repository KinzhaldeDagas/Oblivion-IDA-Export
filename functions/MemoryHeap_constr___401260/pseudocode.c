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

  *(this + 0x16D) = 0; /*0x40126f*/
  GlobalMemoryStatus((LPMEMORYSTATUS)&Buffer); /*0x401275*/
  v4 = *(_DWORD *)this; /*0x401287*/
  *((_DWORD *)this + 0x5A) = Buffer.dwTotalPhys - Buffer.dwAvailPhys; /*0x401289*/
  *((_DWORD *)this + 3) = a2; /*0x40128f*/
  v5 = *(int (__thiscall **)(_BYTE *, int))(v4 + 4); /*0x401293*/
  *((_DWORD *)this + 1) = 4; /*0x40129d*/
  *((_DWORD *)this + 0x59) = 0; /*0x4012a0*/
  *((_DWORD *)this + 2) = 0x10; /*0x4012a6*/
  *((_DWORD *)this + 0x17) = 0; /*0x4012ad*/
  *((_DWORD *)this + 0x16) = 0; /*0x4012b0*/
  v6 = v5(this, a2); /*0x4012b3*/
  *((_DWORD *)this + 6) = v6; /*0x4012b7*/
  if ( !v6 ) /*0x4012ba*/
    _LN26(0); /*0x4012bd*/
  v7 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0xC); /*0x4012c4*/
  *((_DWORD *)this + 0xC) = 0x400; /*0x4012cf*/
  v8 = v7(this, 0x2000); /*0x4012d6*/
  v9 = v8 + 8 * *((_DWORD *)this + 0xC) - 8; /*0x4012db*/
  *((_DWORD *)this + 0xD) = v8; /*0x4012df*/
  v10 = *(_DWORD *)this; /*0x4012e2*/
  *((_DWORD *)this + 0xE) = v9; /*0x4012e4*/
  *((_DWORD *)this + 0x11) = (*(int (__thiscall **)(_BYTE *, int))(v10 + 0xC))(this, 0x80); /*0x4012f3*/
  v11 = 0; /*0x4012f6*/
  v12 = 2; /*0x4012f8*/
  v24 = 4; /*0x4012fd*/
  do /*0x401400*/
  {
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11)) = 0; /*0x401304*/
    v13 = (unsigned int)(*((_DWORD *)this + 1) + (v12 - 2) * ((*((_DWORD *)this + 1) << 0xA) / 0x10)) /*0x401324*/
        / *((_DWORD *)this + 1)
        - 1;
    if ( v13 < *((_DWORD *)this + 0xC) ) /*0x40132a*/
      v14 = (_BYTE *)(*((_DWORD *)this + 0xD) + 8 * v13); /*0x401334*/
    else
      v14 = this + 0x3C; /*0x40132c*/
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 4) = v14; /*0x40133a*/
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 8) = 0; /*0x401341*/
    v15 = (unsigned int)(*((_DWORD *)this + 1) + (v12 - 1) * ((*((_DWORD *)this + 1) << 0xA) / 0x10)) /*0x401362*/
        / *((_DWORD *)this + 1)
        - 1;
    if ( v15 < *((_DWORD *)this + 0xC) ) /*0x401368*/
      v16 = (_BYTE *)(*((_DWORD *)this + 0xD) + 8 * v15); /*0x401372*/
    else
      v16 = this + 0x3C; /*0x40136a*/
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0xC) = v16; /*0x401378*/
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0x10) = 0; /*0x40137f*/
    v17 = (unsigned int)(*((_DWORD *)this + 1) + v12 * ((*((_DWORD *)this + 1) << 0xA) / 0x10)) / *((_DWORD *)this + 1) /*0x40139d*/
        - 1;
    if ( v17 < *((_DWORD *)this + 0xC) ) /*0x4013a3*/
      v18 = (_BYTE *)(*((_DWORD *)this + 0xD) + 8 * v17); /*0x4013ad*/
    else
      v18 = this + 0x3C; /*0x4013a5*/
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0x14) = v18; /*0x4013b3*/
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0x18) = 0; /*0x4013ba*/
    v19 = (unsigned int)(*((_DWORD *)this + 1) + (v12 + 1) * ((*((_DWORD *)this + 1) << 0xA) / 0x10)) /*0x4013db*/
        / *((_DWORD *)this + 1)
        - 1;
    if ( v19 < *((_DWORD *)this + 0xC) ) /*0x4013e1*/
      v20 = (_BYTE *)(*((_DWORD *)this + 0xD) + 8 * v19); /*0x4013eb*/
    else
      v20 = this + 0x3C; /*0x4013e3*/
    *(_DWORD *)(v11 + *((_DWORD *)this + 0x11) + 0x1C) = v20; /*0x4013f1*/
    v12 += 4; /*0x4013f5*/
    v11 += 0x20; /*0x4013f8*/
    --v24; /*0x4013fb*/
  }
  while ( v24 ); /*0x401400*/
  _memset(*((_DWORD *)this + 0xD), 0, 8 * *((_DWORD *)this + 0xC)); /*0x401415*/
  *((_DWORD *)this + 0xF) = 0; /*0x401423*/
  *((_DWORD *)this + 0x10) = 0; /*0x401427*/
  GlobalMemoryStatus((LPMEMORYSTATUS)&v23); /*0x40142a*/
  *((_DWORD *)this + 0x15) = v23.dwAvailPhys; /*0x401434*/
  result = a3; /*0x401437*/
  *((_DWORD *)this + 4) = 0; /*0x40143d*/
  *((_DWORD *)this + 5) = 0; /*0x401440*/
  *((_DWORD *)this + 0x12) = 0; /*0x401443*/
  *((_DWORD *)this + 0x13) = 0; /*0x401446*/
  *((_DWORD *)this + 0x14) = 0; /*0x401449*/
  *((_DWORD *)this + 7) = 0; /*0x40144c*/
  *((_DWORD *)this + 8) = 0; /*0x40144f*/
  *((_DWORD *)this + 9) = 0; /*0x401452*/
  *((_DWORD *)this + 0xA) = 0; /*0x401455*/
  *((_DWORD *)this + 0xB) = 0; /*0x401458*/
  *((_DWORD *)this + 0x18) = 0; /*0x40145b*/
  *(this + 0x64) = 0; /*0x40145e*/
  *(this + 0x16C) = a3; /*0x401461*/
  if ( !a3 ) /*0x401468*/
    return MemoryPool_ResetRegistry(); /*0x40146a*/
  return result; /*0x40146f*/
}

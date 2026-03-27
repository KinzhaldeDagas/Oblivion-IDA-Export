_DWORD *__thiscall sub_77D650(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // edx
  int v9; // [esp+0h] [ebp-20h]
  int v10; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+8h] [ebp-18h]
  _DWORD *v12; // [esp+1Ch] [ebp-4h] BYREF

  v2 = a2;
  if ( (*(this + 2) & 0x10000000) == 0 && a2 <= *(this + 3) )
    v2 = *(this + 3);
  v4 = *(this + 4);
  v11 = *(this + 6);
  v10 = *(this + 1);
  v9 = *(this + 5);
  a2 = 0;
  if ( (*(int (__stdcall **)(int, unsigned int, int, int, int, unsigned int *, _DWORD))(*(_DWORD *)v4 + 0x68))(
         v4,
         v2,
         v9,
         v10,
         v11,
         &a2,
         0) < 0 )
    return 0;
  v6 = (_DWORD *)dword_B4289C;
  if ( !dword_B4289C )
  {
    sub_77D5C0();
    v6 = (_DWORD *)dword_B4289C;
  }
  v7 = v6[0xF];
  dword_B4289C = v7;
  if ( v7 )
    *(_DWORD *)(v7 + 0x40) = 0;
  v6[0xF] = 0;
  v6[0x10] = 0;
  *v6 = this;
  v6[2] = a2;
  v6[3] = v2;
  v6[9] = v2;
  v6[0xA] = v2;
  v6[4] = *(this + 1);
  v6[5] = *(this + 2);
  v6[7] = *(this + 6);
  v8 = *(this + 5);
  v12 = v6;
  v6[6] = v8;
  v6[1] = sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(this + 7), &v12);
  return v6;
}

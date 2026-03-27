int __thiscall sub_7234B0(int *this, unsigned int *a2)
{
  unsigned int *v3; // esi
  int result; // eax
  unsigned int v5; // eax
  int (__cdecl *v6)(unsigned int, unsigned int **, int, _DWORD *, int); // eax
  _DWORD *v7; // eax
  Ni2DBuffer *v8; // eax
  Ni2DBuffer **v9; // edi
  unsigned int v10; // [esp-14h] [ebp-34h]
  _DWORD v11[2]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v3 = a2;
  sub_707F00(this, (int)a2);
  sub_712A20(v3);
  result = sub_712A20(v3);
  if ( v3[0x36] >= 0x5000015 )
  {
    v5 = v3[0x87];
    LOBYTE(a2) = 0;
    v10 = v5;
    v6 = *(int (__cdecl **)(unsigned int, unsigned int **, int, _DWORD *, int))(v5 + 4);
    v11[0] = 1;
    result = v6(v10, &a2, 1, v11, 1);
    if ( (_BYTE)a2 )
    {
      v7 = (_DWORD *)FormHeapAlloc(0x10u);
      v11[1] = v7;
      v12 = 0;
      if ( v7 )
        v8 = (Ni2DBuffer *)sub_7385B0(v7);
      else
        v8 = 0;
      v9 = (Ni2DBuffer **)(this + 0x2F);
      v12 = 0xFFFFFFFF;
      NiSmartPointer_Set__(v9, v8);
      return sub_7386E0((int *)*v9, v3);
    }
  }
  return result;
}

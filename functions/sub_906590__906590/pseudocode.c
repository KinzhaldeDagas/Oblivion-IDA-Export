int __thiscall sub_906590(_DWORD *this, _DWORD *a2, _DWORD *a3, int *a4)
{
  int result; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // edx
  int (__thiscall ***v11)(_DWORD, char *, int *, _DWORD *, _DWORD *, int, _DWORD); // ecx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edi
  bool v17; // cc
  int (__stdcall ***v18)(char); // [esp+20h] [ebp-238h]
  int v19; // [esp+20h] [ebp-238h]
  int (__stdcall ***v20)(char); // [esp+20h] [ebp-238h]
  int v21; // [esp+24h] [ebp-234h]
  int v22; // [esp+28h] [ebp-230h]
  int v23; // [esp+28h] [ebp-230h]
  char v24; // [esp+2Fh] [ebp-229h] BYREF
  int v25; // [esp+30h] [ebp-228h]
  int v26; // [esp+34h] [ebp-224h]
  _DWORD v27[4]; // [esp+38h] [ebp-220h] BYREF
  _BYTE v28[524]; // [esp+48h] [ebp-210h] BYREF

  result = *(this + 4);
  v6 = *(_DWORD *)(*a3 + 0xC);
  v7 = 0;
  v25 = v6;
  v26 = 0;
  if ( result > 0 )
  {
    v21 = 0;
    while ( 1 )
    {
      v8 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v6 + 0x28))(v6, *(_DWORD *)(v7 + *(this + 3)), v28);
      v9 = *(this + 3);
      v27[3] = a3;
      v10 = (_DWORD *)(v7 + v9);
      v27[2] = a3[2];
      v27[1] = *v10;
      v11 = (int (__thiscall ***)(_DWORD, char *, int *, _DWORD *, _DWORD *, int, _DWORD))a4[1];
      v27[0] = v8;
      if ( *(_BYTE *)(**v11)(v11, &v24, a4, a2, a3, v25, *v10) )
      {
        v18 = *(int (__stdcall ****)(char))(v7 + *(this + 3) + 8);
        if ( v18 == sub_8E0970() )
        {
          v22 = *(this + 2);
          v19 = *a4;
          v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
          v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v27[0] + 8))(v27[0]);
          v14 = *((_BYTE *)a4 + 0xC) ? v19 + 0x590 : v19 + 0x190;
          v15 = *(unsigned __int8 *)(v14 + 0x20 * v12 + v13);
          v16 = v21 + *(this + 3);
          *(_DWORD *)(v16 + 8) = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v19 + 0x14 * v15 + 0x990))(
                                   a2,
                                   v27,
                                   a4,
                                   v22);
          v7 = v21;
        }
        else
        {
          ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD *, int *))(*v18)[7])(v18, a2, v27, a4);
        }
      }
      else
      {
        v20 = *(int (__stdcall ****)(char))(v7 + *(this + 3) + 8);
        if ( v20 != sub_8E0970() )
        {
          ((void (__thiscall *)(int (__stdcall ***)(char)))(*v20)[6])(v20);
          v23 = v7 + *(this + 3);
          *(_DWORD *)(v23 + 8) = sub_8E0970();
        }
      }
      result = v26 + 1;
      v7 += 0xC;
      v17 = ++v26 < *(this + 4);
      v21 = v7;
      if ( !v17 )
        break;
      v6 = v25;
    }
  }
  return result;
}

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

  result = *(this + 4); /*0x9065b1*/
  v6 = *(_DWORD *)(*a3 + 0xC); /*0x9065b4*/
  v7 = 0; /*0x9065b8*/
  v25 = v6; /*0x9065bc*/
  v26 = 0; /*0x9065c0*/
  if ( result > 0 )
  {
    v21 = 0; /*0x9065cd*/
    while ( 1 )
    {
      v8 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v6 + 0x28))(v6, *(_DWORD *)(v7 + *(this + 3)), v28); /*0x9065e5*/
      v9 = *(this + 3); /*0x9065eb*/
      v27[3] = a3; /*0x9065ee*/
      v10 = (_DWORD *)(v7 + v9); /*0x9065f5*/
      v27[2] = a3[2]; /*0x9065f7*/
      v27[1] = *v10; /*0x9065fd*/
      v11 = (int (__thiscall ***)(_DWORD, char *, int *, _DWORD *, _DWORD *, int, _DWORD))a4[1]; /*0x906601*/
      v27[0] = v8; /*0x906604*/
      if ( *(_BYTE *)(**v11)(v11, &v24, a4, a2, a3, v25, *v10) )
      {
        v18 = *(int (__stdcall ****)(char))(v7 + *(this + 3) + 8); /*0x906632*/
        if ( v18 == sub_8E0970() )
        {
          v22 = *(this + 2); /*0x90664d*/
          v19 = *a4; /*0x906653*/
          v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x90665e*/
          v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v27[0] + 8))(v27[0]); /*0x906662*/
          v14 = *((_BYTE *)a4 + 0xC) ? v19 + 0x590 : v19 + 0x190;
          v15 = *(unsigned __int8 *)(v14 + 0x20 * v12 + v13); /*0x906687*/
          v16 = v21 + *(this + 3); /*0x906698*/
          *(_DWORD *)(v16 + 8) = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v19 + 0x14 * v15 + 0x990))( /*0x9066ad*/
                                   a2,
                                   v27,
                                   a4,
                                   v22);
          v7 = v21; /*0x9066b0*/
        }
        else
        {
          ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD *, int *))(*v18)[7])(v18, a2, v27, a4); /*0x9066c5*/
        }
      }
      else
      {
        v20 = *(int (__stdcall ****)(char))(v7 + *(this + 3) + 8); /*0x9066d1*/
        if ( v20 != sub_8E0970() ) /*0x9066e0*/
        {
          ((void (__thiscall *)(int (__stdcall ***)(char)))(*v20)[6])(v20); /*0x9066e4*/
          v23 = v7 + *(this + 3); /*0x9066ec*/
          *(_DWORD *)(v23 + 8) = sub_8E0970(); /*0x9066f9*/
        }
      }
      result = v26 + 1; /*0x906703*/
      v7 += 0xC; /*0x906704*/
      v17 = ++v26 < *(this + 4); /*0x906707*/
      v21 = v7; /*0x90670d*/
      if ( !v17 ) /*0x906711*/
        break; /*0x906711*/
      v6 = v25; /*0x9065d3*/
    }
  }
  return result; /*0x906717*/
}

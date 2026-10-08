int __thiscall sub_903650(int *this, int *a2, _DWORD *a3, int *a4)
{
  int *v4; // edx
  int result; // eax
  int v7; // ecx
  int v8; // esi
  int *v9; // edi
  int (__thiscall ***v10)(_DWORD, int **, int *, _DWORD *, int *, int, int); // ecx
  int (__stdcall ***v11)(char); // ebp
  int v12; // ebp
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // esi
  int (__stdcall ***v18)(char); // ebp
  int (__stdcall ****v19)(char); // ebp
  int v20; // [esp+18h] [ebp-1Ch]
  int v21; // [esp+1Ch] [ebp-18h]
  int v22; // [esp+20h] [ebp-14h]
  _DWORD v23[4]; // [esp+24h] [ebp-10h] BYREF

  v4 = a2; /*0x903653*/
  result = *a2; /*0x903657*/
  v23[2] = a2[2]; /*0x90365f*/
  v7 = *(this + 4); /*0x903663*/
  v8 = 0; /*0x903667*/
  v21 = result; /*0x90366b*/
  v23[3] = a2; /*0x90366f*/
  v20 = 0; /*0x903673*/
  if ( v7 > 0 ) /*0x903677*/
  {
    v9 = a4; /*0x90367f*/
    while ( 1 ) /*0x90369e*/
    {
      v23[0] = *(_DWORD *)(*(_DWORD *)(result + 0x10) + 8 * v8); /*0x90369e*/
      v10 = (int (__thiscall ***)(_DWORD, int **, int *, _DWORD *, int *, int, int))v9[1]; /*0x9036a2*/
      v23[1] = v8; /*0x9036aa*/
      if ( *(_BYTE *)(**v10)(v10, &a4, v9, a3, v4, result, v8) ) /*0x9036b4*/
      {
        v11 = *(int (__stdcall ****)(char))(*(this + 3) + 4 * v8); /*0x9036c0*/
        if ( v11 == sub_8E0970() ) /*0x9036ca*/
        {
          v12 = *v9; /*0x9036d5*/
          v22 = *(this + 2); /*0x9036d7*/
          v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v23[0] + 8))(v23[0]); /*0x9036e6*/
          v14 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3); /*0x9036e8*/
          v15 = v12 + 0x590; /*0x9036f0*/
          if ( !*((_BYTE *)v9 + 0xC) ) /*0x9036eb*/
            v15 = v12 + 0x190; /*0x9036f8*/
          v16 = *(unsigned __int8 *)(v15 + 0x20 * v13 + v14); /*0x903707*/
          v17 = (_DWORD *)(4 * v20 + *(this + 3)); /*0x903725*/
          *v17 = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v12 + 0x14 * v16 + 0x990))(v23, a3, v9, v22); /*0x90372f*/
          v8 = v20; /*0x903731*/
        }
        else
        {
          ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD *, int *))(*v11)[7])(v11, v23, a3, v9); /*0x90374a*/
        }
      }
      else
      {
        v18 = *(int (__stdcall ****)(char))(*(this + 3) + 4 * v8); /*0x903752*/
        if ( v18 != sub_8E0970() ) /*0x90375c*/
        {
          ((void (__thiscall *)(int (__stdcall ***)(char)))(*v18)[6])(v18); /*0x903763*/
          v19 = (int (__stdcall ****)(char))(4 * v8 + *(this + 3)); /*0x903770*/
          *v19 = sub_8E0970(); /*0x903777*/
        }
      }
      result = *(this + 4); /*0x90377a*/
      v20 = ++v8; /*0x903780*/
      if ( v8 >= result ) /*0x903784*/
        break; /*0x903784*/
      v4 = a2; /*0x903685*/
      result = v21; /*0x903689*/
    }
  }
  return result; /*0x90378c*/
}

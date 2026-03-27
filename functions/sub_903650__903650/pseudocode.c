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

  v4 = a2;
  result = *a2;
  v23[2] = a2[2];
  v7 = *(this + 4);
  v8 = 0;
  v21 = result;
  v23[3] = a2;
  v20 = 0;
  if ( v7 > 0 )
  {
    v9 = a4;
    while ( 1 )
    {
      v23[0] = *(_DWORD *)(*(_DWORD *)(result + 0x10) + 8 * v8);
      v10 = (int (__thiscall ***)(_DWORD, int **, int *, _DWORD *, int *, int, int))v9[1];
      v23[1] = v8;
      if ( *(_BYTE *)(**v10)(v10, &a4, v9, a3, v4, result, v8) )
      {
        v11 = *(int (__stdcall ****)(char))(*(this + 3) + 4 * v8);
        if ( v11 == sub_8E0970() )
        {
          v12 = *v9;
          v22 = *(this + 2);
          v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v23[0] + 8))(v23[0]);
          v14 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
          v15 = v12 + 0x590;
          if ( !*((_BYTE *)v9 + 0xC) )
            v15 = v12 + 0x190;
          v16 = *(unsigned __int8 *)(v15 + 0x20 * v13 + v14);
          v17 = (_DWORD *)(4 * v20 + *(this + 3));
          *v17 = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v12 + 0x14 * v16 + 0x990))(v23, a3, v9, v22);
          v8 = v20;
        }
        else
        {
          ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD *, int *))(*v11)[7])(v11, v23, a3, v9);
        }
      }
      else
      {
        v18 = *(int (__stdcall ****)(char))(*(this + 3) + 4 * v8);
        if ( v18 != sub_8E0970() )
        {
          ((void (__thiscall *)(int (__stdcall ***)(char)))(*v18)[6])(v18);
          v19 = (int (__stdcall ****)(char))(4 * v8 + *(this + 3));
          *v19 = sub_8E0970();
        }
      }
      result = *(this + 4);
      v20 = ++v8;
      if ( v8 >= result )
        break;
      v4 = a2;
      result = v21;
    }
  }
  return result;
}

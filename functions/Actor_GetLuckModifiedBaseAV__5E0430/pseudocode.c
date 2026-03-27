void __userpurge Actor_GetLuckModifiedBaseAV(int a1@<ecx>, int a2, signed int a3)
{
  int v4; // ebp
  int v5; // edi
  int v6; // edi
  int v7; // ebx
  int v8; // eax

  v4 = 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
      v4 = v5;
  }
  v6 = 0;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
      v6 = v7;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x128))(v4, 7);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x128))(v6);
  Calc_LuckModifiedSkill(v8, a3);
}

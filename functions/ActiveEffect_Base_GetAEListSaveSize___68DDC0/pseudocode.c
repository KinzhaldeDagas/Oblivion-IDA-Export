int __cdecl ActiveEffect_Base_GetAEListSaveSize_(_DWORD *a1, int a2)
{
  __int16 v2; // si
  _DWORD *v3; // esi
  __int16 i; // bp
  __int16 v5; // di
  __int16 v6; // ax
  __int16 v8; // [esp+10h] [ebp-4h]

  v2 = 0;
  if ( sub_45A170() )
    v2 = 6;
  v8 = v2 + 2;
  v3 = a1;
  for ( i = v8; v3; i += v5 + v6 + 5 )
  {
    if ( !v3[1] && !*v3 )
      break;
    v5 = 0;
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x2Au )
      v5 = 2;
    v6 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*v3 + 0xC))(*v3, a2);
    v3 = (_DWORD *)v3[1];
  }
  return ActiveEffect_Base_GetAEListSaveSize__::Done_();
}

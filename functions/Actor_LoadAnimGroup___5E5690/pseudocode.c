signed __int16 __thiscall Actor_LoadAnimGroup_(TESObjectREFR *this, int a2, int a3, char a4)
{
  int v5; // ebp
  int v7; // edi
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v10; // [esp+Ch] [ebp-8h]
  ActorAnimData *v11; // [esp+10h] [ebp-4h]

  v5 = 0;
  v11 = this->vtbl->GetAnimData(this);
  if ( !v11 )
    return 0xFF;
  v7 = a3;
  if ( !a3 )
    v7 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xEC))(*((_DWORD *)this + 0x16), 1);
  v8 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16));
  if ( (v8 & 0x800) != 0 )
  {
    v10 = 2;
  }
  else if ( (v8 & 0x2000) != 0 )
  {
    v10 = 3;
  }
  else
  {
    v10 = (v8 & 0x400) != 0;
  }
  if ( !this->vtbl[1].super.GetEditorName(this)
    && ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].GetSleepState)(this, 1)
    || this->vtbl[1].super.GetEditorName(this)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16))
    || this == (TESObjectREFR *)TESDataHandler_g_PlayerRef && TESDataHandler_g_PlayerRef->defaultAnimData
    || v7
    && (a3
     || (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16))
     || (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2FC))(*((_DWORD *)this + 0x16)))
    || a4 )
  {
    if ( !v7 || a4 )
      v5 = 1;
    else
      v5 = *(_DWORD *)(4 * *(char *)(*(_DWORD *)(v7 + 8) + 0x90) + 0xB086B8);
  }
  if ( *((_DWORD *)this + 0x16) )
  {
    if ( (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xF8))(*((_DWORD *)this + 0x16), 1) )
    {
      if ( a2 >= 0x1B && a2 <= 0x1C )
        v5 = 0;
    }
    if ( *((_DWORD *)this + 0x16) )
    {
      if ( v5 )
      {
        if ( a2 >= 0x22
          && a2 <= 0x27
          && (!(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16))
           || (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x138))(*((_DWORD *)this + 0x16))) )
        {
          v5 = 0;
        }
      }
    }
  }
  v9 = sub_51A9B0(v10, v5, a2);
  return sub_470D20(v11, v9, 0);
}

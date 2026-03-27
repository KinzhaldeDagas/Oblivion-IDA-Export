void __thiscall sub_6A1590(int *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  _DWORD **sound; // ecx
  PlayerCharacter *v6; // eax
  NiNode *PlayerNode; // eax
  NiNode *v8; // eax
  volatile LONG *v9; // eax
  int v10; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebx
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // edi

  v2 = *(this + 7);
  if ( v2 )
  {
    v3 = *(this + 0xD);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 0xC);
      if ( v4 == 0x852FE || v4 == 0x84A51 )
      {
        sound = (_DWORD **)OSGlobals->sound;
        if ( sound )
          sub_6AC420(sound, v2, 1.0);
      }
    }
  }
  if ( *(this + 0x12) )
  {
    v6 = (PlayerCharacter *)*(this + 7);
    if ( v6 == TESDataHandler_g_PlayerRef )
    {
      PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
      if ( PlayerNode )
        sub_4ADAD0(PlayerNode, *(this + 0x12));
      v8 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
      if ( v8 )
LABEL_15:
        sub_4ADAD0(v8, *(this + 0x12));
    }
    else if ( v6 )
    {
      v8 = v6->vtbl->super.super.super.GetNiNode(*(this + 7));
      if ( v8 )
        goto LABEL_15;
    }
  }
  v9 = (volatile LONG *)*(this + 0x10);
  if ( v9 )
    sub_4AC740(v9, *(this + 0xF));
  v10 = *(this + 0xF);
  v11 = InterlockedDecrement;
  if ( v10 )
  {
    if ( !v11((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    *(this + 0xF) = 0;
  }
  v12 = (_DWORD *)*(this + 0x10);
  if ( v12 )
    sub_7074B0(v12, 0);
  v13 = *(this + 0x10);
  if ( v13 )
  {
    if ( !v11((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    *(this + 0x10) = 0;
  }
  v14 = *(this + 0x12);
  if ( v14 )
  {
    if ( !v11((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    *(this + 0x12) = 0;
  }
  *(this + 7) = 0;
}

void __thiscall ValueModifierEffect_AttributeWarning(int this)
{
  MagicTarget *p_magicTarget; // eax
  _DWORD *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  const char *value; // ecx
  unsigned int v7; // eax
  const char *v8; // esi
  const char *Name; // eax
  const char *duration; // [esp+0h] [ebp-D4h]
  char string[200]; // [esp+8h] [ebp-CCh] BYREF

  if ( reference ) /*0x6a83e4*/
    p_magicTarget = &reference->super.super.magicTarget; /*0x6a83f0*/
  else
    p_magicTarget = 0; /*0x6a83f5*/
  if ( *(MagicTarget **)(this + 0x20) == p_magicTarget ) /*0x6a83fa*/
  {
    v3 = *(_DWORD **)(this + 0xC); /*0x6a8400*/
    v4 = v3[5]; /*0x6a8403*/
    if ( v4 <= 7 || v4 - 0xC <= 0x14 ) /*0x6a8411*/
    {
      if ( EffectItem_IsHostile(v3) ) /*0x6a8417*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 0x18))(*(_DWORD *)(this + 8)) != 4 ) /*0x6a8431*/
        {
          v5 = *(_DWORD *)(*(_DWORD *)(this + 0xC) + 0x1C); /*0x6a8436*/
          if ( (*(_DWORD *)(v5 + 0x58) & 4) != 0 ) /*0x6a8442*/
          {
            if ( (*(_DWORD *)(v5 + 0x58) & 2) != 0 /*0x6a8452*/
              || (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)this) )
            {
              value = MEMORY[0xB38E08].value; /*0x6a845b*/
            }
            else
            {
              value = MEMORY[0xB38E00].value; /*0x6a8463*/
            }
            v7 = *(_DWORD *)(*(_DWORD *)(this + 0xC) + 0x14); /*0x6a846c*/
            v8 = MEMORY[0xB38D28].value; /*0x6a846f*/
            duration = value; /*0x6a8475*/
            Name = (const char *)ActorValue_GetName(v7); /*0x6a8477*/
            _sprintf(string, "%s %s %s", v8, Name, duration); /*0x6a848b*/
            GameUI_QueueMessage(string, 0, 1u, *(float *)&dword_A46C30); /*0x6a84a5*/
          }
        }
      }
    }
  }
  ValueModifierEffect_AttributeWarning_::Wrapup(); /*0x6a83fa*/
}

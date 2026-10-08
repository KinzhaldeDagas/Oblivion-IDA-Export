// Effect/projectile special-idle helper: starts named sequence from this object's controller manager map; does not query actor KFFZ or ActorAnimData.
void __thiscall PlaySpecialIdleOnControllerManager(void *this, char *a2)
{
  int v3; // esi
  NiRTTI *v4; // eax
  char v5; // al
  int v6; // eax
  char *v7; // esi

  v3 = *(_DWORD *)(*((_DWORD *)this + 6) + 0xC); /*0x570c07*/
  if ( v3 )
  {
    v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x570c19*/
    if ( v4 ) /*0x570c1d*/
    {
      while ( v4 != &stru_B3CAC0 ) /*0x570c25*/
      {
        v4 = v4->parent; /*0x570c27*/
        if ( !v4 ) /*0x570c2c*/
          goto LABEL_5; /*0x570c2c*/
      }
      v5 = 1; /*0x570c92*/
    }
    else
    {
LABEL_5:
      v5 = 0; /*0x570c2e*/
    }
    v6 = v5 != 0 ? v3 : 0;
    if ( v6 ) /*0x570c36*/
    {
      if ( NiTMap_GetAt((_DWORD *)(v6 + 0x58), (int)a2, &a2) ) /*0x570c45*/
      {
        v7 = a2; /*0x570c4e*/
        if ( a2 ) /*0x570c54*/
        {
          NiControllerSequence_Activate((NiControllerSequence *)a2, 0, 0, 1.0, 0.0, 0, 0); /*0x570c6e*/
          a2 = *((char **)v7 + 0xC); /*0x570c76*/
          if ( *((float *)this + 2) < (double)*(float *)&a2 ) /*0x570c88*/
            *((float *)this + 2) = *(float *)&a2; /*0x570c8a*/
        }
      }
    }
  }
}

NiTimeController *__thiscall sub_6D7120(NiTimeController *this, NiObjectNET *a2, int a3, int a4)
{
  unsigned int v5; // edi
  bool v6; // zf
  NiNode *m_pTarget; // ebx
  unsigned int v8; // eax
  float x; // edx
  float Radius; // ebp
  int v11; // eax
  unsigned int v13; // [esp-4h] [ebp-28h]
  unsigned int v14; // [esp-4h] [ebp-28h]

  sub_6EC180(this); /*0x6d714b*/
  v5 = 0; /*0x6d7154*/
  *((_DWORD *)this + 0x14) = a4; /*0x6d7156*/
  v6 = this->members.m_pTarget == (NiNode *)a2; /*0x6d715d*/
  this->vtbl = (NiTimeControllerVtbl *)&NiTextureTransformController::`vftable'; /*0x6d7164*/
  *((_DWORD *)this + 0x15) = 0; /*0x6d716a*/
  *((_DWORD *)this + 0x10) = 0; /*0x6d716d*/
  *((_BYTE *)this + 0x48) = 0; /*0x6d7170*/
  *((_DWORD *)this + 0x13) = 0; /*0x6d7174*/
  if ( !v6 ) /*0x6d7177*/
    *((_DWORD *)this + 0x11) = 0; /*0x6d7179*/
  NiTimeController::SetTarget(this, a2); /*0x6d717f*/
  *((_DWORD *)this + 0x11) = a3; /*0x6d718a*/
  if ( a3 )
  {
    m_pTarget = this->members.m_pTarget; /*0x6d71a0*/
    if ( m_pTarget )
    {
      v8 = 0; /*0x6d71af*/
      if ( HIWORD(m_pTarget->members.super.m_kWorldBound.Center.y) )
      {
        x = m_pTarget->members.super.m_kWorldBound.Center.x; /*0x6d71b5*/
        while ( *(_DWORD *)LODWORD(x) != a3 ) /*0x6d71ba*/
        {
          ++v8; /*0x6d71bc*/
          LODWORD(x) += 4; /*0x6d71bf*/
          if ( v8 >= HIWORD(m_pTarget->members.super.m_kWorldBound.Center.y) ) /*0x6d71c4*/
            goto LABEL_10; /*0x6d71c4*/
        }
        v13 = *((_DWORD *)this + 0x15); /*0x6d71eb*/
        *((_BYTE *)this + 0x48) = 0; /*0x6d71ec*/
        *((_DWORD *)this + 0x13) = v8; /*0x6d71f0*/
        FormHeapFree(v13); /*0x6d71f3*/
        *((_DWORD *)this + 0x15) = 0; /*0x6d71f8*/
      }
      else
      {
LABEL_10:
        if ( sub_6D1950(&this->members.m_pTarget->vtbl) )
        {
          Radius = m_pTarget->members.super.m_kWorldBound.Radius; /*0x6d71d1*/
          while ( 1 )
          {
            v11 = Radius == 0.0 || v5 >= *(unsigned __int16 *)(LODWORD(Radius) + 0xA)
                ? 0
                : *(_DWORD *)(*(_DWORD *)(LODWORD(Radius) + 4) + 4 * v5);
            if ( v11 == a3 ) /*0x6d7203*/
              break; /*0x6d7203*/
            if ( ++v5 >= sub_6D1950(m_pTarget) ) /*0x6d7211*/
              return this; /*0x6d7211*/
          }
          v14 = *((_DWORD *)this + 0x15); /*0x6d7218*/
          *((_BYTE *)this + 0x48) = 1; /*0x6d7219*/
          *((_DWORD *)this + 0x13) = v5; /*0x6d721d*/
          FormHeapFree(v14); /*0x6d7220*/
          *((_DWORD *)this + 0x15) = 0; /*0x6d7225*/
        }
      }
    }
  }
  else
  {
    FormHeapFree(*((_DWORD *)this + 0x15)); /*0x6d7193*/
    *((_DWORD *)this + 0x15) = 0; /*0x6d7198*/
  }
  return this; /*0x6d7231*/
}

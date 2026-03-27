NiTimeController *__thiscall sub_6D7120(NiTimeController *this, NiNode *a2, int a3, int a4)
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

  sub_6EC180(this);
  v5 = 0;
  *((_DWORD *)this + 0x14) = a4;
  v6 = this->members.m_pTarget == a2;
  this->vtbl = (NiTimeControllerVtbl *)&NiTextureTransformController::`vftable';
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_BYTE *)this + 0x48) = 0;
  *((_DWORD *)this + 0x13) = 0;
  if ( !v6 )
    *((_DWORD *)this + 0x11) = 0;
  NiTimeController::SetTarget(this, (NiObjectNET *)a2);
  *((_DWORD *)this + 0x11) = a3;
  if ( a3 )
  {
    m_pTarget = this->members.m_pTarget;
    if ( m_pTarget )
    {
      v8 = 0;
      if ( HIWORD(m_pTarget->members.super.m_kWorldBound.Center.y) )
      {
        x = m_pTarget->members.super.m_kWorldBound.Center.x;
        while ( *(_DWORD *)LODWORD(x) != a3 )
        {
          ++v8;
          LODWORD(x) += 4;
          if ( v8 >= HIWORD(m_pTarget->members.super.m_kWorldBound.Center.y) )
            goto LABEL_10;
        }
        v13 = *((_DWORD *)this + 0x15);
        *((_BYTE *)this + 0x48) = 0;
        *((_DWORD *)this + 0x13) = v8;
        FormHeapFree(v13);
        *((_DWORD *)this + 0x15) = 0;
      }
      else
      {
LABEL_10:
        if ( sub_6D1950(&this->members.m_pTarget->vtbl) )
        {
          Radius = m_pTarget->members.super.m_kWorldBound.Radius;
          while ( 1 )
          {
            v11 = Radius == 0.0 || v5 >= *(unsigned __int16 *)(LODWORD(Radius) + 0xA)
                ? 0
                : *(_DWORD *)(*(_DWORD *)(LODWORD(Radius) + 4) + 4 * v5);
            if ( v11 == a3 )
              break;
            if ( ++v5 >= sub_6D1950(m_pTarget) )
              return this;
          }
          v14 = *((_DWORD *)this + 0x15);
          *((_BYTE *)this + 0x48) = 1;
          *((_DWORD *)this + 0x13) = v5;
          FormHeapFree(v14);
          *((_DWORD *)this + 0x15) = 0;
        }
      }
    }
  }
  else
  {
    FormHeapFree(*((_DWORD *)this + 0x15));
    *((_DWORD *)this + 0x15) = 0;
  }
  return this;
}

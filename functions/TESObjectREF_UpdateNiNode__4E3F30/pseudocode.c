void __usercall TESObjectREF_UpdateNiNode(TESChildCELL *this@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  NiObject *v10; // eax
  NiObject *v11; // eax
  int v12; // edi
  int v13; // esi
  ActorAnimData *v14; // eax
  int v15; // edx
  int v16; // [esp+18h] [ebp-4h]

  v5 = *((_DWORD *)this + 2); /*0x4e3f34*/
  if ( (v5 & 0x20) == 0 && (v5 & 0x800) == 0 ) /*0x4e3f4a*/
  {
    v6 = *(unsigned __int8 *)(*((_DWORD *)this + 7) + 4); /*0x4e3f53*/
    if ( v6 == 0x1A || (unsigned int)(v6 - 0x23) <= 1 ) /*0x4e3f62*/
      (*((void (__thiscall **)(TESChildCELL *))this->vtbl + 0x3F))(this); /*0x4e3f6e*/
    v7 = (*((int (__usercall **)@<eax>(TESChildCELL *@<ecx>, double@<st0>, double@<st1>))this->vtbl + 0x55))( /*0x4e3f7b*/
           this,
           a3,
           a2);
    v8 = 0; /*0x4e3f7d*/
    if ( v7 ) /*0x4e3f81*/
    {
      if ( *(_WORD *)(v7 + 0xB6) ) /*0x4e3f87*/
      {
        v9 = **(_DWORD **)(v7 + 0xB0); /*0x4e3f9a*/
        if ( v9 ) /*0x4e3f9e*/
        {
          v10 = *(NiObject **)(v9 + 0xC); /*0x4e3fa4*/
          if ( v10 ) /*0x4e3fa9*/
          {
            v11 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, v10); /*0x4e3fb6*/
            v12 = (int)v11; /*0x4e3fbb*/
            v16 = 0; /*0x4e3fc2*/
            if ( v11 ) /*0x4e3fc6*/
            {
              if ( ((int)v11[1].__vftable & 8) != 0 ) /*0x4e3fd1*/
              {
                if ( !HIWORD(v11[8].members.m_uiRefCount) ) /*0x4e3fd3*/
                  goto LABEL_20; /*0x4e3fd3*/
                do /*0x4e4030*/
                {
                  v13 = *(_DWORD *)(*(_DWORD *)(v12 + 0x40) + 4 * v8); /*0x4e3fe3*/
                  if ( v13 ) /*0x4e3fe8*/
                  {
                    if ( *(_DWORD *)(v13 + 0x44) ) /*0x4e3fea*/
                    {
                      if ( sub_49F950(v12, v13, (int)this) ) /*0x4e3ff2*/
                      {
                        sub_4E0D90((ExtraDataList **)this, v13); /*0x4e4001*/
                        NiControllerSequence_Deactivate((NiControllerSequence *)v13, 0.0, 0); /*0x4e4010*/
                        sub_4D90D0(this, *(const char **)(v13 + 8)); /*0x4e401b*/
                      }
                      else
                      {
                        ++v16; /*0x4e4022*/
                      }
                    }
                  }
                  ++v8; /*0x4e402b*/
                }
                while ( v8 < *(unsigned __int16 *)(v12 + 0x46) ); /*0x4e4030*/
                if ( !v16 ) /*0x4e4038*/
LABEL_20:
                  *(_WORD *)(v12 + 8) &= ~8u; /*0x4e403a*/
              }
            }
          }
        }
      }
    }
    v14 = (ActorAnimData *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x59))(this); /*0x4e404b*/
    if ( v14 ) /*0x4e4050*/
    {
      v15 = *((_DWORD *)this + 0xF); /*0x4e4052*/
      if ( v15 ) /*0x4e4057*/
      {
        if ( *(_DWORD *)(v15 + 0x1C) ) /*0x4e4059*/
          ActorAnimData_Update(v14, (Actor *)this, *(float *)&MEMORY[0xB33E90][0xC], kTerrainLODQuadRayDirectionZ); /*0x4e4078*/
      }
    }
  }
}

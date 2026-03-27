UInt32 __usercall TESObjectREF_UpdateNiNode@<eax>(
        TESChildCELL *this@<ecx>,
        int a2@<edi>,
        double a3@<st1>,
        double a4@<st0>)
{
  UInt32 result; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // eax
  NiObject *v11; // eax
  NiObject *v12; // eax
  int v13; // edi
  int v14; // esi
  int v15; // edx
  int v16; // [esp+Ch] [ebp-10h]
  int v17; // [esp+18h] [ebp-4h]

  result = *((_DWORD *)this + 2);
  if ( (result & 0x20) == 0 )
  {
    result >>= 0xB;
    if ( (result & 1) == 0 )
    {
      v7 = *(unsigned __int8 *)(*((_DWORD *)this + 7) + 4);
      if ( v7 == 0x1A || (unsigned int)(v7 - 0x23) <= 1 )
        (*((void (__thiscall **)(TESChildCELL *))this->vtbl + 0x3F))(this);
      v8 = (*((int (__usercall **)@<eax>(TESChildCELL *@<ecx>, double@<st0>, double@<st1>))this->vtbl + 0x55))(
             this,
             a4,
             a3);
      v9 = 0;
      if ( v8 )
      {
        if ( *(_WORD *)(v8 + 0xB6) )
        {
          v10 = **(_DWORD **)(v8 + 0xB0);
          if ( v10 )
          {
            v11 = *(NiObject **)(v10 + 0xC);
            if ( v11 )
            {
              v16 = a2;
              v12 = NiRTTI_Cast(&stru_B3CAC0, v11);
              v13 = (int)v12;
              v17 = 0;
              if ( v12 )
              {
                if ( ((int)v12[1].__vftable & 8) != 0 )
                {
                  if ( !HIWORD(v12[8].members.m_uiRefCount) )
                    goto LABEL_20;
                  do
                  {
                    v14 = *(_DWORD *)(*(_DWORD *)(v13 + 0x40) + 4 * v9);
                    if ( v14 )
                    {
                      if ( *(_DWORD *)(v14 + 0x44) )
                      {
                        if ( sub_49F950(v13, v14, (int)this) )
                        {
                          sub_4E0D90((ExtraDataList **)this, v14);
                          a4 = 0.0;
                          sub_6C9CB0(v14, 0.0, 0);
                          sub_4D90D0(this, *(const char **)(v14 + 8));
                        }
                        else
                        {
                          ++v17;
                        }
                      }
                    }
                    ++v9;
                  }
                  while ( v9 < *(unsigned __int16 *)(v13 + 0x46) );
                  if ( !v17 )
LABEL_20:
                    *(_WORD *)(v13 + 8) &= ~8u;
                }
              }
              a2 = v16;
            }
          }
        }
      }
      result = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x59))(this);
      if ( result )
      {
        v15 = *((_DWORD *)this + 0xF);
        if ( v15 )
        {
          if ( *(_DWORD *)(v15 + 0x1C) )
            return sub_476D10((AnimSequenceSingle *)result, a2, flt_B33E9C, a3, a4, (int)this, flt_B33E9C, flt_A30634);
        }
      }
    }
  }
  return result;
}

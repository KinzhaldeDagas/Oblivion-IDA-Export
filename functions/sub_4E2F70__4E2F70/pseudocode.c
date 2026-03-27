void __thiscall sub_4E2F70(void (__thiscall *this)(NiRefObject *this, bool freeThis), char a2)
{
  void (__thiscall *v2)(NiRefObject *, bool); // esi
  int v3; // ebp
  void (__thiscall *v4)(NiRefObject *, bool); // ebx
  NiObject *v5; // edi
  int v6; // eax
  BSExtraDataVtbl *v7; // edx
  unsigned int v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // eax
  char v12; // al
  _DWORD *v13; // eax
  int v14; // eax
  NiObject *v15; // esi
  void (__thiscall **p_Destructor)(NiRefObject *, bool); // [esp+20h] [ebp-10h]
  BSExtraDataVtbl *v17; // [esp+28h] [ebp-8h]

  v2 = this;
  v3 = *((_DWORD *)this + 0xF);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    if ( *(_WORD *)(v3 + 0xB6) )
    {
      v6 = **(_DWORD **)(v3 + 0xB0);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 0xC) )
        {
          v5 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v6 + 0xC));
          if ( v5 )
          {
            v7 = sub_420FD0((ExtraDataList *)((char *)v2 + 0x44));
            v17 = v7;
            if ( v7 )
            {
              v8 = 0;
              if ( HIWORD(v5[8].members.m_uiRefCount) )
              {
                p_Destructor = &v5[8].__vftable->super.Destructor;
                do
                {
                  v2 = *p_Destructor;
                  if ( *p_Destructor )
                  {
                    if ( !strcmp(*((const char **)v2 + 2), (const char *)v7) )
                    {
                      sub_4715C0(v5, 0.0);
                      LOWORD(v5[1].__vftable) |= 8u;
                      if ( !*((_DWORD *)v2 + 0x11) )
                        sub_6C9BA0(v2, 0, 0, 1.0, 0.0, 0, 0);
                      *((float *)v2 + 0x12) = *((float *)v2 + 0xC);
                      NiAVObject_UpdateNiAVObject((NiAVObject *)v3, *((float *)v2 + 0xC), 1);
                      sub_4E0D90((ExtraDataList **)this, (int)v2);
                      sub_6C9CB0((int)v2, 0.0, 0);
                      LOWORD(v5[1].__vftable) &= ~8u;
                      v4 = v2;
                      break;
                    }
                    v4 = 0;
                    v7 = v17;
                  }
                  ++p_Destructor;
                  ++v8;
                }
                while ( v8 < HIWORD(v5[8].members.m_uiRefCount) );
              }
            }
          }
        }
      }
    }
  }
  if ( !a2 )
  {
    if ( v5 )
      sub_4715C0(v5, 0.0);
    sub_4DA8F0((int)v5, (int)v2, (int)v5, (NiAVObject *)v3, flt_A30634);
    if ( v3 && (v9 = *(_DWORD *)(v3 + 0xC)) != 0 )
    {
      v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 4))(*(_DWORD *)(v3 + 0xC));
      if ( v11 )
      {
        while ( (BSStringT *)v11 != &stru_B3CAC0 )
        {
          v11 = *(_DWORD *)(v11 + 4);
          if ( !v11 )
            goto LABEL_26;
        }
        v12 = 1;
      }
      else
      {
LABEL_26:
        v12 = 0;
      }
      v13 = v12 != 0 ? (_DWORD *)v9 : 0;
      v10 = (int)v13;
      if ( v13 )
        sub_4715C0(v13, 0.0);
    }
    else
    {
      v10 = 0;
    }
    sub_4DA8F0((int)v5, v10, v10, (NiAVObject *)v3, flt_A30634);
  }
  if ( v4 )
  {
    if ( sub_480820((_DWORD *)v3) )
    {
      if ( !*((_DWORD *)v4 + 0x11) )
      {
        if ( *(_WORD *)(v3 + 0xB6) )
          v14 = **(_DWORD **)(v3 + 0xB0);
        else
          v14 = 0;
        v15 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v14 + 0xC));
        sub_6C9BA0(v4, 0, 0, 1.0, 0.0, 0, 0);
        LOWORD(v15[1].__vftable) |= 8u;
        NiAVObject_UpdateNiAVObject((NiAVObject *)v3, *((float *)v4 + 0xC), 1);
        sub_480930((_DWORD *)v3);
      }
    }
  }
}

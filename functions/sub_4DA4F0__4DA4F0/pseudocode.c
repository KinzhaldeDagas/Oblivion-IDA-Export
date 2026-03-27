void __thiscall sub_4DA4F0(_DWORD *this)
{
  int v2; // edi
  char *v3; // eax
  int v4; // eax
  NiObject *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  NiObject *v10; // eax
  NiObject *v11; // esi
  int v12; // edi
  int v13; // ebx
  void (__thiscall *Destructor)(NiRefObject *, bool); // edi
  int v15; // ebp
  int v16; // eax
  char v17; // al
  _DWORD *v18; // eax

  v2 = *(this + 0xF);
  if ( v2 )
  {
    v3 = (char *)sub_420FD0((ExtraDataList *)(this + 0x11));
    if ( v3 && !_strcmp(v3, off_B10568)
      || *(_WORD *)(v2 + 0xB6)
      && **(_DWORD **)(v2 + 0xB0)
      && *(_DWORD *)(sub_405790(v2, 0) + 0xC)
      && (v4 = sub_405790(v2, 0), (v5 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v4 + 0xC))) != 0)
      && (v6 = sub_4715A0(v5, (int)off_B10568)) != 0
      && *(_DWORD *)(v6 + 0x44)
      || sub_480820((_DWORD *)v2) )
    {
      v7 = (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + 7) + 0x114))(*(this + 7), this);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 0x150))(this, v7);
      (*(void (__thiscall **)(_DWORD *))(*this + 0x148))(this);
    }
  }
  v8 = *(this + 0xF);
  if ( v8 )
  {
    if ( *(_WORD *)(v8 + 0xB6) )
    {
      v9 = **(_DWORD **)(v8 + 0xB0);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 0xC) )
        {
          v10 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v9 + 0xC));
          v11 = v10;
          if ( v10 )
          {
            v12 = sub_4715A0(v10, *(_DWORD *)animGroupInfos_ptr);
            v13 = sub_4715A0(v11, (int)off_B10328);
            sub_4715C0(v11, 0.0);
            if ( v12 || v13 )
            {
              LOWORD(v11[1].__vftable) |= 8u;
              if ( v12 )
              {
                if ( !*(_DWORD *)(v12 + 0x44) )
                  sub_470B20((_DWORD *)v12, 0, 0, 1.0, 0.0, 0);
                *(float *)(v12 + 0x48) = -flt_A7DEB4;
                NiAVObject_UpdateNiAVObject((NiAVObject *)v8, *(float *)(v12 + 0x2C), 1);
              }
              if ( v13 )
              {
                if ( !*(_DWORD *)(v13 + 0x44) )
                  sub_470B20((_DWORD *)v13, 0, 0, 1.0, 0.0, 0);
                *(float *)(v13 + 0x48) = -flt_A7DEB4;
                NiAVObject_UpdateNiAVObject((NiAVObject *)v8, *(float *)(v13 + 0x2C), 1);
              }
            }
            else
            {
              LOWORD(v11[1].__vftable) |= 8u;
              Destructor = v11[8].__vftable->super.Destructor;
              if ( Destructor )
              {
                sub_470B20(Destructor, 0, 0, 1.0, 0.0, 0);
                *((float *)Destructor + 0x12) = -flt_A7DEB4;
                NiAVObject_UpdateNiAVObject((NiAVObject *)v8, *((float *)Destructor + 0xB), 1);
              }
              sub_4715C0(v11, 0.0);
              LOWORD(v11[1].__vftable) &= ~8u;
            }
          }
        }
      }
    }
    v15 = *(_DWORD *)(v8 + 0xC);
    if ( v15 )
    {
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 4))(v15);
      if ( v16 )
      {
        while ( (BSStringT *)v16 != &stru_B3CAC0 )
        {
          v16 = *(_DWORD *)(v16 + 4);
          if ( !v16 )
            goto LABEL_34;
        }
        v17 = 1;
      }
      else
      {
LABEL_34:
        v17 = 0;
      }
      v18 = v17 != 0 ? (_DWORD *)v15 : 0;
      if ( v18 )
        sub_4715C0(v18, 0.0);
    }
  }
}

char __thiscall sub_69EB60(_DWORD *this, float a2)
{
  int v3; // ecx
  NiObject *v4; // eax
  int v5; // eax

  v3 = *(this + 7);
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x154))(v3) && sub_69D9A0((int)this, a2) )
  {
    if ( *(this + 0xC) )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 0x70))(this);
      v4 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(*(this + 0xC) + 0xC));
      if ( v4 )
      {
        v5 = sub_4715A0(v4, (int)"SpecialIdle_HitEffect");
        if ( v5 )
        {
          if ( *(float *)(v5 + 0x30) < (double)*(float *)(v5 + 0x34) && *(_DWORD *)(v5 + 0x44) )
          {
            if ( *(_DWORD *)(v5 + 0x24) != 2 && !*((_BYTE *)this + 0x24) )
              return 1;
            *((_BYTE *)this + 0x24) = 1;
            sub_6C9CB0(v5, 0.0, 0);
            *((float *)this + 2) = *((float *)this + 8);
          }
        }
      }
    }
    if ( !*((_BYTE *)this + 0x24) || *((float *)this + 2) + dbl_A3D0C0 >= *((float *)this + 8) )
      return 1;
  }
  return 0;
}

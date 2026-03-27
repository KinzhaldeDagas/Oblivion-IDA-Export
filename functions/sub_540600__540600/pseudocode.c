void __thiscall sub_540600(void ***this, float a2)
{
  void **v7; // eax
  void **v8; // edi
  _DWORD *v9; // ebx
  double v10; // st6
  double v11; // st7
  float v12; // [esp+0h] [ebp-8h]
  float v13; // [esp+Ch] [ebp+4h]
  float v14; // [esp+Ch] [ebp+4h]

  if ( !InterfaceManager_IsMenuMode() && !sub_5AD410() )
  {
    if ( *this )
    {
      if ( !sub_6B73A0((int *)*this) )
      {
        OSGLobals_PlaySound(**this, 0x21, 0);
        v8 = v7;
        if ( v7 )
        {
          v9 = *this;
          if ( *this )
          {
            sub_6B73E0(*this);
            FormHeapFree((unsigned int)v9);
          }
          *this = v8;
        }
      }
      if ( *this )
      {
        if ( *(this + 2) == (void **)3 )
        {
          if ( !sub_6B7260((int *)*this) )
            sub_6B7190((int *)*this, 0);
        }
        else if ( sub_53FD20(this, 0x3E8) )
        {
          if ( !sub_6B7260((int *)*this) )
            sub_6B7190((int *)*this, 1);
        }
        v10 = sub_6B72E0((int *)*this) - a2;
        v11 = a2;
        v13 = v10;
        v14 = fabs(v13);
        if ( v14 > (double)flt_A34BA0 )
        {
          v12 = v11;
          sub_6B7280((int *)*this, v12);
        }
      }
    }
  }
}

void __thiscall sub_6D6EF0(_DWORD *this, float *a2)
{
  float *v3; // eax

  if ( !sub_6D6C80((int)this) )
LABEL_10:
    JUMPOUT(0x6D6FB2);
  v3 = *(float **)(*(this + 0x11) + 0xC);
  if ( v3 )
  {
    switch ( *(this + 0x14) )
    {
      case 0:
        *a2 = *v3;
        return;
      case 1:
        *a2 = v3[1];
        return;
      case 2:
        *a2 = v3[2];
        return;
      case 3:
        *a2 = v3[3];
        return;
      case 4:
        *a2 = v3[4];
        def_6D6F28(a2);
        return;
      default:
        goto LABEL_10;
    }
  }
  *a2 = 0.0;
}

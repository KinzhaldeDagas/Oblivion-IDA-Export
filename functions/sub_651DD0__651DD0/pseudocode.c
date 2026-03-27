void __thiscall sub_651DD0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]
  float v11; // [esp+0h] [ebp-4h]
  float v12; // [esp+0h] [ebp-4h]

  if ( !g_bUpdatePlayerModel )
  {
    v1 = *(this + 0x3F);
    if ( v1 )
    {
      v7 = fabs(1.0);
      *(float *)(v1 + 0x60) = v7;
    }
    v2 = *(this + 0x40);
    if ( v2 )
    {
      v8 = fabs(1.0);
      *(float *)(v2 + 0x60) = v8;
    }
    v3 = *(this + 0x41);
    if ( v3 )
    {
      v9 = fabs(1.0);
      *(float *)(v3 + 0x60) = v9;
    }
    v4 = *(this + 0x42);
    if ( v4 )
    {
      v10 = fabs(1.0);
      *(float *)(v4 + 0x60) = v10;
    }
    v5 = *(this + 0x43);
    if ( v5 )
    {
      v11 = fabs(1.0);
      *(float *)(v5 + 0x60) = v11;
    }
    v6 = *(this + 0x44);
    if ( v6 )
    {
      v12 = fabs(1.0);
      *(float *)(v6 + 0x60) = v12;
    }
  }
}

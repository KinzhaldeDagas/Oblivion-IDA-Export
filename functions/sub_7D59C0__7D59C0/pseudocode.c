void __thiscall sub_7D59C0(_BYTE *this, NiCamera *a2, int a3)
{
  if ( *(this + 0xF5) )
    sub_7D4570(*(float *)&this, a2, a3);
  else
    ShadowSceneLight_Render___((int)this, a3);
}

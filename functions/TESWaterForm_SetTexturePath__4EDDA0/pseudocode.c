BOOL __thiscall TESWaterForm::SetTexturePath(TESWaterForm *this, char *a2)
{
  return BSStringT_Set(&this->texture.path, a2, 0);
}

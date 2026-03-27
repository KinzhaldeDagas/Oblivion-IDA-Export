ActiveEffect *__thiscall LightEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  LightEffect::~LightEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

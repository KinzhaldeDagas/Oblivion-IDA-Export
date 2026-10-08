NiPoint3 *__thiscall NiPoint3_CrossProduct(NiPoint3 *this, NiPoint3 *out, NiPoint3 *other)
{
  out->x = other->z * this->y - other->y * this->z; /*0x498ff6*/
  out->y = this->z * other->x - this->x * other->z; /*0x499004*/
  out->z = other->y * this->x - other->x * this->y; /*0x499013*/
  return out; /*0x499016*/
}

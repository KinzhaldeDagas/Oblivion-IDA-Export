// Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
LONG __thiscall sub_405680(NiNode *this, BSShaderProperty *a2)
{
  BSShaderProperty *v3; // esi
  LONG result; // eax

  v3 = a2; /*0x4056a5*/
  result = (*((int (__thiscall **)(BSShaderProperty *))a2->vtbl + 0x13))(a2);// Fog property propagation decode: virtual GetPropertyType on attached property; B333E4/BSFogProperty reports kind 1. /*0x4056b0*/
  if ( result < 0xA )                           // Fog property propagation decode: attach helper admits managed property kinds < 10; active fog kind 1 passes this gate. /*0x4056b5*/
  {
    a2 = v3; /*0x4056bb*/
    InterlockedIncrement((volatile LONG *)&v3->member); /*0x4056bf*/
    NiTRefPointerList__AddHead(&this->members.super.m_propertyList.vtlb, (int *)&a2);// Fog property propagation decode: inserts B333E4 into the node local property list, later merged into NiPropertyState slot +0x0C. /*0x4056d8*/
    result = InterlockedDecrement((volatile LONG *)&v3->member); /*0x4056e6*/
    if ( !result ) /*0x4056ee*/
      return (*(LONG (__thiscall **)(BSShaderProperty *, int))v3->vtbl)(v3, 1); /*0x4056f8*/
  }
  return result; /*0x4056fa*/
}

int __thiscall sub_4CB7F0(TESObjectCELL *this, float *a2)
{
  ObjectListEntry *p_objectList; // edi
  int v5; // ebx
  float *v6; // eax
  double v7; // st7
  float v9; // [esp+10h] [ebp-Ch]
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]
  float v12; // [esp+20h] [ebp+4h]

  *a2 = g_zeroNiPoint3.x; /*0x4cb7ff*/
  a2[1] = g_zeroNiPoint3.y; /*0x4cb809*/
  a2[2] = g_zeroNiPoint3.z; /*0x4cb819*/
  sub_496EA0((char *)&unk_B35C80, this); /*0x4cb81c*/
  p_objectList = &this->members.objectList; /*0x4cb821*/
  v5 = 0; /*0x4cb824*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb828*/
  {
    do /*0x4cb878*/
    {
      if ( p_objectList->refr ) /*0x4cb830*/
      {
        v6 = p_objectList->refr->vtbl->GetPos(p_objectList->refr); /*0x4cb83e*/
        ++v5; /*0x4cb844*/
        v9 = *a2 + *v6; /*0x4cb847*/
        v10 = v6[1] + a2[1]; /*0x4cb851*/
        v7 = v6[2] + a2[2]; /*0x4cb860*/
        *a2 = v9; /*0x4cb863*/
        a2[1] = v10; /*0x4cb865*/
        v11 = v7; /*0x4cb868*/
        a2[2] = v11; /*0x4cb870*/
      }
      p_objectList = p_objectList->next; /*0x4cb873*/
    }
    while ( p_objectList ); /*0x4cb878*/
    if ( v5 > 0 ) /*0x4cb880*/
    {
      v12 = 1.0 / (double)v5; /*0x4cb88a*/
      *a2 = *a2 * v12; /*0x4cb89a*/
      a2[1] = a2[1] * v12; /*0x4cb8a1*/
      a2[2] = v12 * a2[2]; /*0x4cb8a7*/
    }
  }
  return sub_496F50(&unk_B35C80, this); /*0x4cb8b5*/
}

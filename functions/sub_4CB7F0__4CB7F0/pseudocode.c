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

  *a2 = Vector3_InitValue_;
  a2[1] = *(&Vector3_InitValue_ + 1);
  a2[2] = dword_B3F9B0;
  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  v5 = 0;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      if ( p_objectList->refr )
      {
        v6 = p_objectList->refr->vtbl->GetPos(p_objectList->refr);
        ++v5;
        v9 = *a2 + *v6;
        v10 = v6[1] + a2[1];
        v7 = v6[2] + a2[2];
        *a2 = v9;
        a2[1] = v10;
        v11 = v7;
        a2[2] = v11;
      }
      p_objectList = p_objectList->next;
    }
    while ( p_objectList );
    if ( v5 > 0 )
    {
      v12 = 1.0 / (double)v5;
      *a2 = *a2 * v12;
      a2[1] = a2[1] * v12;
      a2[2] = v12 * a2[2];
    }
  }
  return sub_496F50(&stru_B35C80, this);
}

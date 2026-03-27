int __userpurge AVCollection_ModAVLimited_::ModExistingModifier@<eax>(
        int a1@<ecx>,
        unsigned int **a2@<esi>,
        int a3,
        int a4,
        int a5,
        float a6,
        int a7)
{
  float v8; // [esp+10h] [ebp+10h]

  v8 = *(float *)(a1 + 4) + a6;
  if ( !a7 && v8 > 0.0 )
    v8 = 0.0;
  *(float *)(a1 + 4) = v8;
  if ( v8 == 0.0 )
    AVCollection_Remove(a2, (_BYTE *)a1);
  return AVCollection_ModAVLimited_::Done(a3, a4, a5);
}

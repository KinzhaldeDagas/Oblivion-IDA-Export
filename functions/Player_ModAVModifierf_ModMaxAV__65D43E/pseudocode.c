// positive sp value has been detected, the output may be wrong!
void __userpurge Player_ModAVModifierf_::ModMaxAV(int a1@<esi>, int a2, int a3, float a4, int a5)
{
  if ( a3 != 0xFFFFFFFF )
    *(float *)(a1 + 4 * a3 + 0x204) = Player_ModAVNode(*(float *)(a1 + 4 * a3 + 0x204), a4, a5);
}

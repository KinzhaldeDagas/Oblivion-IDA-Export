// positive sp value has been detected, the output may be wrong!
void __userpurge Player_ModAVModifierf_::ModForcedCurAV(int a1@<esi>, int a2, int a3, float a4, int a5)
{
  if ( a3 == 0xFFFFFFFF )
    JUMPOUT(0x65D470);
  *(float *)(a1 + 4 * a3 + 0x324) = Player_ModAVNode(*(float *)(a1 + 4 * a3 + 0x324), a4, a5);
}

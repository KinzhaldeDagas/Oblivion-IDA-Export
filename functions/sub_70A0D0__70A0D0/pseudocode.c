// NiNode virtual UpdateDownwardPass (+0x60). Optionally updates this node's properties/controllers, invokes virtual UpdateWorldTransform (+0x74), clears its world-bound radius, recursively updates every non-null child in +0xB0/count +0xB6, and copies/merges nonempty child spheres into the node bound.
// NiNode_UpdateDownwardPass: synchronous controller/property call (47C930), vfunc+74 world transform, child vfunc+60 loop at 70A12D, and bound merge complete before RET 8. No queue/dispatch in this function body. DX11 V220 foreign barrier tag 2 identifies this observed full-call producer, not an uncounted tail. Completion only fences synchronous descendants on the same thread; it does not prove arbitrary virtual implementations or another worker completed.
unsigned int __thiscall NiNode_UpdateDownwardPass(float *this, float a2, int a3)
{
  unsigned int result; // eax
  unsigned int v5; // ebp
  float *v6; // edi

  if ( (_BYTE)a3 ) /*0x70a0db*/
    NiAVObject_UpdatePropertiesAndControllers(this, a2, 1); /*0x70a0e7*/
  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x74))(this); /*0x70a0f3*/
  v5 = 0; /*0x70a0f7*/
  *(this + 0xB) = 0.0; /*0x70a0f9*/
  if ( *((_WORD *)this + 0x5B) ) /*0x70a0fc*/
  {
    do /*0x70a17e*/
    {
      v6 = *(float **)(*((_DWORD *)this + 0x2C) + 4 * v5); /*0x70a116*/
      if ( v6 ) /*0x70a11b*/
      {
        (*(void (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)v6 + 0x60))(v6, LODWORD(a2), a3); /*0x70a12d*/
        if ( 0.0 != v6[0xB] ) /*0x70a139*/
        {
          if ( 0.0 == *(this + 0xB) ) /*0x70a143*/
          {
            *(this + 8) = v6[8]; /*0x70a14b*/
            *(this + 9) = v6[9]; /*0x70a151*/
            *(this + 0xA) = v6[0xA]; /*0x70a157*/
            *(this + 0xB) = v6[0xB]; /*0x70a15d*/
          }
          else
          {
            NiSphere_Merge(this + 8, v6 + 8); /*0x70a169*/
          }
        }
      }
      result = *((unsigned __int16 *)this + 0x5B); /*0x70a172*/
      ++v5; /*0x70a179*/
    }
    while ( v5 < result ); /*0x70a17e*/
  }
  return result; /*0x70a181*/
}

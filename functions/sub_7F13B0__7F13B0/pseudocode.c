//
//
// [v151 normal-card integration] Verified actual leaf shader virtual+2C entry is7F13B0 (A92844+2C), not internal helper7F0BC0. Resets pass queue through+80, calls helper with seven stack arguments, appends native pass+394. Plugin private copy of43-entry leaf shader vtable wraps this entry to bind paired normal texture stage1 after native setup; native type9/property layout retained. Offscreen native-bytecode comparison passed514 draws; native scene execution remains UNVERIFIED.
int __thiscall OB_SpeedTreeLeafShader_BuildDrawPass_010201A0(
        void *self,
        void *geometry,
        void *skin,
        void *rendererData,
        void *propertyArray,
        void *effects,
        void *world,
        void *bound)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)self + 0x80))(self); /*0x7f13bb*/
  OB_SpeedTreeLeafShader_SetupPass_010201A0( /*0x7f13e2*/
    (_DWORD **)self,
    *(float *)&geometry,
    (int)skin,
    (int)rendererData,
    propertyArray,
    (int)effects,
    (int)world,
    (int)bound);
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)self + 4, *((_DWORD *)self + 0xE), (NiD3DPass **)self + 0xE5); /*0x7f13f5*/
  ++*((_DWORD *)self + 0xE); /*0x7f13fa*/
  return 0; /*0x7f1400*/
}

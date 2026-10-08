// 2026-10-08 verified NiGeometry LinkObject: first base7081B0 links inherited properties/collision, then two7124A0 stream object resolutions replace+B4 modelData and+B8 skinInstance with exact reference accounting; RET4. Strong family correspondence to Fallout/Xenon82C08C18 (NiAVObject::LinkObject and two object-link resolutions), independently checked in Oblivion body. Base/virtual/destructor side effects prevent narrow ECX-only invalidation without more proof.
void __thiscall NiGeometry_LinkObject(NiGeometry *self, void *stream)
{
  int v3; // eax
  NiGeometryData *geomData; // esi
  NiGeometryData *v5; // ebx
  int v6; // eax
  NiObject *skinData; // esi
  NiObject *v8; // ebx

  sub_7081B0((unsigned __int16 *)self, stream); /*0x72335b*/
  v3 = sub_7124A0(stream); /*0x723362*/
  geomData = self->member.geomData; /*0x723367*/
  v5 = (NiGeometryData *)v3; /*0x72336d*/
  if ( geomData != (NiGeometryData *)v3 ) /*0x723371*/
  {
    if ( geomData ) /*0x723375*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&geomData->member) ) /*0x72337b*/
        geomData->__vftable->super.super.Destructor((NiRefObject *)geomData, 1); /*0x723391*/
    }
    self->member.geomData = v5; /*0x723395*/
    if ( v5 ) /*0x72339b*/
      InterlockedIncrement((volatile LONG *)&v5->member); /*0x7233a1*/
  }
  v6 = sub_7124A0(stream); /*0x7233a9*/
  skinData = self->member.skinData; /*0x7233ae*/
  v8 = (NiObject *)v6; /*0x7233b4*/
  if ( skinData != (NiObject *)v6 ) /*0x7233b8*/
  {
    if ( skinData ) /*0x7233bc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&skinData->members) ) /*0x7233c2*/
        skinData->__vftable->super.Destructor((NiRefObject *)skinData, 1); /*0x7233d8*/
    }
    self->member.skinData = v8; /*0x7233dc*/
    if ( v8 ) /*0x7233e2*/
      InterlockedIncrement((volatile LONG *)&v8->members); /*0x7233e8*/
  }
}

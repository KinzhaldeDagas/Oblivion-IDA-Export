struct NiGeometryGroupVtbl
{
void (__thiscall *Destructor)(NiGeometryGroup *This, bool freeThis);
void (__thiscall *Unk_01)(NiGeometryGroup *This, void *unk00);
void (__thiscall *AddObject)(NiGeometryGroup *This, NiGeometryData *GeometryData, NiSkinInstance *SkinInstance, void *Partition);
void (__thiscall *Unk_03)(NiGeometryGroup *This);
void (__thiscall *RemoveObject)(NiGeometryGroup *This, void *Partition);
void (__thiscall *RemoveObject1)(NiGeometryGroup *This, NiGeometryData *GeometryData);
NiVBChip *(__thiscall *CreateChip)(NiGeometryGroup *This, NiGeometryBufferData *BufferData, UInt32 Stream);
void (__thiscall *ReleaseChip)(NiGeometryGroup *This, NiGeometryBufferData *BufferData, UInt32 Stream);
bool (__thiscall *IsDynamic)(NiGeometryGroup *This);
void (__thiscall *Unk_09)(NiGeometryGroup *This);
};

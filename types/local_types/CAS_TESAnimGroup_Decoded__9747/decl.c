struct CAS_TESAnimGroup_Decoded
{
void *vftable;
CAS_u32 refCount;
CAS_u16 encodedKey;
CAS_u16 pad0A;
CAS_u32 requiredNoteCount;
float *requiredNoteTimes;
float moveX;
float moveY;
float moveZ;
CAS_u8 morphKey;
CAS_u8 blend;
CAS_u8 pad22[2];
CAS_u32 eventCount;
struct CAS_TESAnimGroupEvent_Decoded *events;
};

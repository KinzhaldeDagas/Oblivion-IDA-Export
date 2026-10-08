struct NiAVObjectMembr
{
NiObjectNETMembr super;
NiAVObjects_Flags m_flags;
UInt8 pad01A[2];
NiNode *m_parent;
NiBound m_kWorldBound;
NiTransform m_localTransform;
NiTransform m_worldTransform;
NiTList_NiProperty m_propertyList;
void *m_spCollision;
};

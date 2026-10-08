struct NiObjectNETMembr
{
NiRefObjectMembr super;
const char *m_pcName;
NiInterpController *m_controller;
NiExtraData **m_extraDataList;
UInt16 m_extraDataListLen;
UInt16 m_extraDataListCapacity;
};

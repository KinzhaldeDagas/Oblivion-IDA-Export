struct __cppobj BSShaderLightingProperty : BSShaderProperty
{
NiTPointerListSingleThread<ShadowSceneLight *> lLightList;
float fForcedDarkness;
unsigned int uiReferenceID;
bool bLightListChanged;
void *kLightListFence;
};

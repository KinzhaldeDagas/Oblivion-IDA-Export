struct IRoSimpleMetaDataBuilderVtbl
{
HRESULT_0 (*SetWinRtInterface)(IRoSimpleMetaDataBuilder_0 *, GUID);
HRESULT_0 (*SetDelegate)(IRoSimpleMetaDataBuilder_0 *, GUID);
HRESULT_0 (*SetInterfaceGroupSimpleDefault)(IRoSimpleMetaDataBuilder_0 *, const WCHAR_0 *, const WCHAR_0 *, const GUID *);
HRESULT_0 (*SetInterfaceGroupParameterizedDefault)(IRoSimpleMetaDataBuilder_0 *, const WCHAR_0 *, UINT32, const WCHAR_0 **);
HRESULT_0 (*SetRuntimeClassSimpleDefault)(IRoSimpleMetaDataBuilder_0 *, const WCHAR_0 *, const WCHAR_0 *, const GUID *);
HRESULT_0 (*SetRuntimeClassParameterizedDefault)(IRoSimpleMetaDataBuilder_0 *, const WCHAR_0 *, UINT32, const WCHAR_0 **);
HRESULT_0 (*SetStruct)(IRoSimpleMetaDataBuilder_0 *, const WCHAR_0 *, UINT32, const WCHAR_0 **);
HRESULT_0 (*SetEnum)(IRoSimpleMetaDataBuilder_0 *, const WCHAR_0 *, const WCHAR_0 *);
HRESULT_0 (*SetParameterizedInterface)(IRoSimpleMetaDataBuilder_0 *, GUID, UINT32);
HRESULT_0 (*SetParameterizedDelegate)(IRoSimpleMetaDataBuilder_0 *, GUID, UINT32);
};

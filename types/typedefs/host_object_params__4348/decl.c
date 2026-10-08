struct __declspec(align(8)) host_object_params
{
class_reg_data regdata;
CLSID clsid;
IID iid;
HANDLE event __offset(OFF64|AUTO);
HRESULT_0 hr;
IStream_0 *stream __offset(OFF64|AUTO);
BOOL apartment_threaded;
};

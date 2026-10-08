struct __declspec(align(8)) tagTrackerWindowInfo
{
IDataObject_0 *dataObject;
IDropSource_0 *dropSource;
DWORD dwOKEffect;
DWORD *pdwEffect;
BOOL trackingDone;
BOOL inTrackCall;
HRESULT_0 returnValue;
BOOL escPressed;
HWND curTargetHWND;
IDropTarget_0 *curDragTarget;
POINTL curMousePos;
DWORD dwKeyState;
};

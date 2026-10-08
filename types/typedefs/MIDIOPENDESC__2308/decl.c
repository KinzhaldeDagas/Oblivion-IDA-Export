struct __unaligned __declspec(align(2)) MIDIOPENDESC
{
HMIDI hMidi;
DWORD_PTR dwCallback;
DWORD_PTR dwInstance;
DWORD_PTR dnDevNode;
DWORD cIds;
MIDIOPENSTRMID rgIds;
};

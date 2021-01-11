# PCLPluginsForUnrealEngine

#Environment
Windows 10
x64
Visual Studio 2017
UnrealEngine4.25

#step:  
1,add plugins to YourProject;  
3,open project and create actor ,then add a component PCL_;  
4,call function LoadPCL();  

in this plugin ,also support multily person tracker,in AzureKinectDK,Max is 10。

If you need to use bone detection and depth map conversion, please do the following:  
DownLoad AzureKinect sdk,and Add the <Azure Kinect Body Tracking SDK installation>/tools folder to the Path variable in Environment Variables for User or System.  
  
If  u want to show Depth and RGB image in Utexture2D,please do the following:  
1,craete actor Create an actor that inherits from the ashowtexture，and call function UpdataRGBTexture or UpdataDepthTexture or UpdataTransformedTexture





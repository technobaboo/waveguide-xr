project('waveguide-xr', 'cpp',
	version : '0.1',
	default_options : ['warning_level=3', 'cpp_std=c++17'])

stereokit = dependency('StereoKitC')

files = []

subdir('src')

executable('waveguide-xr',
	files,
	dependencies: [stereokit],
	install : true)

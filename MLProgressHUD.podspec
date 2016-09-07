Pod::Spec.new do |s|
s.name         = "MLProgressHUD"
s.version      = "1.0.1"
s.summary      = "Just a subclass of MBProgressHUD for myself, Please dont pay attention to it."

s.homepage     = 'https://github.com/molon/MLProgressHUD'
s.license      = { :type => 'MIT'}
s.author       = { "molon" => "dudl@qq.com" }

s.source       = {
:git => "https://github.com/molon/MLProgressHUD.git",
:tag => "#{s.version}"
}

s.requires_arc  = true
s.platform     = :ios, '7.0'
s.public_header_files = 'Classes/**/*.h'
s.source_files  = 'Classes/**/*.{h,m}'

s.dependency 'MBProgressHUD', '= 1.0.0'

end
